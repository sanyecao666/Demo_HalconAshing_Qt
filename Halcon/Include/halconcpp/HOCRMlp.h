/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HOCRMLP
#define HCPP_HOCRMLP

namespace HalconCpp
{

// Represents an instance of a MLP OCR classifier.
class LIntExport HOCRMlp : public HToolBase
{

public:

  // Create an uninitialized instance
  HOCRMlp():HToolBase() {}

  // Copy constructor
  HOCRMlp(const HOCRMlp& source) : HToolBase(source) {}

  // Create HOCRMlp from handle, taking ownership
  explicit HOCRMlp(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HOCRMlp Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_ocr_class_mlp: Read an OCR classifier from a file.
  explicit HOCRMlp(const HString& FileName);

  // read_ocr_class_mlp: Read an OCR classifier from a file.
  explicit HOCRMlp(const char* FileName);

  // create_ocr_class_mlp: Create an OCR classifier using a multilayer perceptron.
  explicit HOCRMlp(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HTuple& Features, const HTuple& Characters, Hlong NumHidden, const HString& Preprocessing, Hlong NumComponents, Hlong RandSeed);

  // create_ocr_class_mlp: Create an OCR classifier using a multilayer perceptron.
  explicit HOCRMlp(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HString& Features, const HTuple& Characters, Hlong NumHidden, const HString& Preprocessing, Hlong NumComponents, Hlong RandSeed);

  // create_ocr_class_mlp: Create an OCR classifier using a multilayer perceptron.
  explicit HOCRMlp(Hlong WidthCharacter, Hlong HeightCharacter, const char* Interpolation, const char* Features, const HTuple& Characters, Hlong NumHidden, const char* Preprocessing, Hlong NumComponents, Hlong RandSeed);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Select an optimal combination of features to classify OCR data from a (protected) training file.
  HTuple SelectFeatureSetTrainfMlpProtected(const HTuple& TrainingFile, const HTuple& Password, const HTuple& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Select an optimal combination of features to classify OCR data from a (protected) training file.
  HTuple SelectFeatureSetTrainfMlpProtected(const HString& TrainingFile, const HString& Password, const HString& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Select an optimal combination of features to classify OCR data from a (protected) training file.
  HTuple SelectFeatureSetTrainfMlpProtected(const char* TrainingFile, const char* Password, const char* FeatureList, const char* SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Selects an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfMlp(const HTuple& TrainingFile, const HTuple& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Selects an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfMlp(const HString& TrainingFile, const HString& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Selects an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfMlp(const char* TrainingFile, const char* FeatureList, const char* SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* Score);

  // Deserialize a serialized MLP-based OCR classifier.
  void DeserializeOcrClassMlp(const HSerializedItem& SerializedItemHandle);

  // Serialize a MLP-based OCR classifier.
  HSerializedItem SerializeOcrClassMlp() const;

  // Read an OCR classifier from a file.
  void ReadOcrClassMlp(const HString& FileName);

  // Read an OCR classifier from a file.
  void ReadOcrClassMlp(const char* FileName);

  // Write an OCR classifier to a file.
  void WriteOcrClassMlp(const HString& FileName) const;

  // Write an OCR classifier to a file.
  void WriteOcrClassMlp(const char* FileName) const;

  // Compute the features of a character.
  HTuple GetFeaturesOcrClassMlp(const HImage& Character, const HString& Transform) const;

  // Compute the features of a character.
  HTuple GetFeaturesOcrClassMlp(const HImage& Character, const char* Transform) const;

  // Classify a related group of characters with an OCR classifier.
  HTuple DoOcrWordMlp(const HRegion& Character, const HImage& Image, const HString& Expression, Hlong NumAlternatives, Hlong NumCorrections, HTuple* Confidence, HString* Word, double* Score) const;

  // Classify a related group of characters with an OCR classifier.
  HString DoOcrWordMlp(const HRegion& Character, const HImage& Image, const HString& Expression, Hlong NumAlternatives, Hlong NumCorrections, double* Confidence, HString* Word, double* Score) const;

  // Classify a related group of characters with an OCR classifier.
  HString DoOcrWordMlp(const HRegion& Character, const HImage& Image, const char* Expression, Hlong NumAlternatives, Hlong NumCorrections, double* Confidence, HString* Word, double* Score) const;

  // Classify multiple characters with an OCR classifier.
  HTuple DoOcrMultiClassMlp(const HRegion& Character, const HImage& Image, HTuple* Confidence) const;

  // Classify multiple characters with an OCR classifier.
  HString DoOcrMultiClassMlp(const HRegion& Character, const HImage& Image, double* Confidence) const;

  // Classify a single character with an OCR classifier.
  HTuple DoOcrSingleClassMlp(const HRegion& Character, const HImage& Image, const HTuple& Num, HTuple* Confidence) const;

  // Classify a single character with an OCR classifier.
  HString DoOcrSingleClassMlp(const HRegion& Character, const HImage& Image, const HTuple& Num, double* Confidence) const;

  // Train an OCR classifier with data from a (protected) training file.
  double TrainfOcrClassMlpProtected(const HTuple& TrainingFile, const HTuple& Password, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Train an OCR classifier with data from a (protected) training file.
  double TrainfOcrClassMlpProtected(const HString& TrainingFile, const HString& Password, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Train an OCR classifier with data from a (protected) training file.
  double TrainfOcrClassMlpProtected(const char* TrainingFile, const char* Password, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Train an OCR classifier.
  double TrainfOcrClassMlp(const HTuple& TrainingFile, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Train an OCR classifier.
  double TrainfOcrClassMlp(const HString& TrainingFile, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Train an OCR classifier.
  double TrainfOcrClassMlp(const char* TrainingFile, Hlong MaxIterations, double WeightTolerance, double ErrorTolerance, HTuple* ErrorLog) const;

  // Compute the information content of the preprocessed feature vectors of an OCR classifier.
  HTuple GetPrepInfoOcrClassMlp(const HTuple& TrainingFile, const HString& Preprocessing, HTuple* CumInformationCont) const;

  // Compute the information content of the preprocessed feature vectors of an OCR classifier.
  HTuple GetPrepInfoOcrClassMlp(const HString& TrainingFile, const HString& Preprocessing, HTuple* CumInformationCont) const;

  // Compute the information content of the preprocessed feature vectors of an OCR classifier.
  HTuple GetPrepInfoOcrClassMlp(const char* TrainingFile, const char* Preprocessing, HTuple* CumInformationCont) const;

  // Return the rejection class parameters of an OCR classifier.
  HTuple GetRejectionParamsOcrClassMlp(const HTuple& GenParamName) const;

  // Return the rejection class parameters of an OCR classifier.
  HString GetRejectionParamsOcrClassMlp(const HString& GenParamName) const;

  // Return the rejection class parameters of an OCR classifier.
  HString GetRejectionParamsOcrClassMlp(const char* GenParamName) const;

  // Set the rejection class parameters of an OCR classifier.
  void SetRejectionParamsOcrClassMlp(const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Set the rejection class parameters of an OCR classifier.
  void SetRejectionParamsOcrClassMlp(const HString& GenParamName, const HString& GenParamValue) const;

  // Set the rejection class parameters of an OCR classifier.
  void SetRejectionParamsOcrClassMlp(const char* GenParamName, const char* GenParamValue) const;

  // Return the regularization parameters of an OCR classifier.
  HTuple GetRegularizationParamsOcrClassMlp(const HString& GenParamName) const;

  // Return the regularization parameters of an OCR classifier.
  HTuple GetRegularizationParamsOcrClassMlp(const char* GenParamName) const;

  // Set the regularization parameters of an OCR classifier.
  void SetRegularizationParamsOcrClassMlp(const HString& GenParamName, const HTuple& GenParamValue) const;

  // Set the regularization parameters of an OCR classifier.
  void SetRegularizationParamsOcrClassMlp(const HString& GenParamName, double GenParamValue) const;

  // Set the regularization parameters of an OCR classifier.
  void SetRegularizationParamsOcrClassMlp(const char* GenParamName, double GenParamValue) const;

  // Return the parameters of an OCR classifier.
  void GetParamsOcrClassMlp(Hlong* WidthCharacter, Hlong* HeightCharacter, HString* Interpolation, HTuple* Features, HTuple* Characters, Hlong* NumHidden, HString* Preprocessing, Hlong* NumComponents) const;

  // Return the parameters of an OCR classifier.
  void GetParamsOcrClassMlp(Hlong* WidthCharacter, Hlong* HeightCharacter, HString* Interpolation, HString* Features, HTuple* Characters, Hlong* NumHidden, HString* Preprocessing, Hlong* NumComponents) const;

  // Create an OCR classifier using a multilayer perceptron.
  void CreateOcrClassMlp(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HTuple& Features, const HTuple& Characters, Hlong NumHidden, const HString& Preprocessing, Hlong NumComponents, Hlong RandSeed);

  // Create an OCR classifier using a multilayer perceptron.
  void CreateOcrClassMlp(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HString& Features, const HTuple& Characters, Hlong NumHidden, const HString& Preprocessing, Hlong NumComponents, Hlong RandSeed);

  // Create an OCR classifier using a multilayer perceptron.
  void CreateOcrClassMlp(Hlong WidthCharacter, Hlong HeightCharacter, const char* Interpolation, const char* Features, const HTuple& Characters, Hlong NumHidden, const char* Preprocessing, Hlong NumComponents, Hlong RandSeed);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HOCRMlp> HOCRMlpArrayRef;
typedef HSmartPtr< HOCRMlpArrayRef > HOCRMlpArrayPtr;


// Represents multiple tool instances
class LIntExport HOCRMlpArray : public HToolArray
{

public:

  // Create empty array
  HOCRMlpArray();

  // Create array from native array of tool instances
  HOCRMlpArray(HOCRMlp* classes, Hlong length);

  // Copy constructor
  HOCRMlpArray(const HOCRMlpArray &tool_array);

  // Destructor
  virtual ~HOCRMlpArray();

  // Assignment operator
  HOCRMlpArray &operator=(const HOCRMlpArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HOCRMlp* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HOCRMlpArrayPtr *mArrayPtr;
};

}

#endif
