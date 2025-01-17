/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HXLDDISTTRANS
#define HCPP_HXLDDISTTRANS

namespace HalconCpp
{

// Represents an instance of a XLD distance transformation.
class LIntExport HXLDDistTrans : public HToolBase
{

public:

  // Create an uninitialized instance
  HXLDDistTrans():HToolBase() {}

  // Copy constructor
  HXLDDistTrans(const HXLDDistTrans& source) : HToolBase(source) {}

  // Create HXLDDistTrans from handle, taking ownership
  explicit HXLDDistTrans(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HXLDDistTrans Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_distance_transform_xld: Read an XLD distance transform from a file.
  explicit HXLDDistTrans(const HString& FileName);

  // read_distance_transform_xld: Read an XLD distance transform from a file.
  explicit HXLDDistTrans(const char* FileName);

  // create_distance_transform_xld: Create the XLD distance transform.
  explicit HXLDDistTrans(const HXLDCont& Contour, const HString& Mode, const HTuple& MaxDistance);

  // create_distance_transform_xld: Create the XLD distance transform.
  explicit HXLDDistTrans(const HXLDCont& Contour, const HString& Mode, double MaxDistance);

  // create_distance_transform_xld: Create the XLD distance transform.
  explicit HXLDDistTrans(const HXLDCont& Contour, const char* Mode, double MaxDistance);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Determine the pointwise distance of two contours using an XLD distance transform.
  HXLDCont ApplyDistanceTransformXld(const HXLDCont& Contour) const;

  // Read an XLD distance transform from a file.
  void ReadDistanceTransformXld(const HString& FileName);

  // Read an XLD distance transform from a file.
  void ReadDistanceTransformXld(const char* FileName);

  // Deserialize an XLD distance transform.
  void DeserializeDistanceTransformXld(const HSerializedItem& SerializedItemHandle);

  // Serialize an XLD distance transform.
  HSerializedItem SerializeDistanceTransformXld() const;

  // Write an XLD distance transform into a file.
  void WriteDistanceTransformXld(const HString& FileName) const;

  // Write an XLD distance transform into a file.
  void WriteDistanceTransformXld(const char* FileName) const;

  // Set new parameters for an XLD distance transform.
  void SetDistanceTransformXldParam(const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Set new parameters for an XLD distance transform.
  void SetDistanceTransformXldParam(const HString& GenParamName, const HString& GenParamValue) const;

  // Set new parameters for an XLD distance transform.
  void SetDistanceTransformXldParam(const char* GenParamName, const char* GenParamValue) const;

  // Get the parameters used to build an XLD distance transform.
  HTuple GetDistanceTransformXldParam(const HTuple& GenParamName) const;

  // Get the parameters used to build an XLD distance transform.
  HTuple GetDistanceTransformXldParam(const HString& GenParamName) const;

  // Get the parameters used to build an XLD distance transform.
  HTuple GetDistanceTransformXldParam(const char* GenParamName) const;

  // Get the reference contour used to build the XLD distance transform.
  HXLDCont GetDistanceTransformXldContour() const;

  // Create the XLD distance transform.
  void CreateDistanceTransformXld(const HXLDCont& Contour, const HString& Mode, const HTuple& MaxDistance);

  // Create the XLD distance transform.
  void CreateDistanceTransformXld(const HXLDCont& Contour, const HString& Mode, double MaxDistance);

  // Create the XLD distance transform.
  void CreateDistanceTransformXld(const HXLDCont& Contour, const char* Mode, double MaxDistance);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HXLDDistTrans> HXLDDistTransArrayRef;
typedef HSmartPtr< HXLDDistTransArrayRef > HXLDDistTransArrayPtr;


// Represents multiple tool instances
class LIntExport HXLDDistTransArray : public HToolArray
{

public:

  // Create empty array
  HXLDDistTransArray();

  // Create array from native array of tool instances
  HXLDDistTransArray(HXLDDistTrans* classes, Hlong length);

  // Copy constructor
  HXLDDistTransArray(const HXLDDistTransArray &tool_array);

  // Destructor
  virtual ~HXLDDistTransArray();

  // Assignment operator
  HXLDDistTransArray &operator=(const HXLDDistTransArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HXLDDistTrans* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HXLDDistTransArrayPtr *mArrayPtr;
};

}

#endif
