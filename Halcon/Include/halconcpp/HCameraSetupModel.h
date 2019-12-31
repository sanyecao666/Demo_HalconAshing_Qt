/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HCAMERASETUPMODEL
#define HCPP_HCAMERASETUPMODEL

namespace HalconCpp
{

// Represents an instance of a camera setup model.
class LIntExport HCameraSetupModel : public HToolBase
{

public:

  // Create an uninitialized instance
  HCameraSetupModel():HToolBase() {}

  // Copy constructor
  HCameraSetupModel(const HCameraSetupModel& source) : HToolBase(source) {}

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HCameraSetupModel Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_camera_setup_model: Restore a camera setup model from a file.
  explicit HCameraSetupModel(const HString& FileName);

  // read_camera_setup_model: Restore a camera setup model from a file.
  explicit HCameraSetupModel(const char* FileName);

  // create_camera_setup_model: Create a model for a setup of calibrated cameras.
  explicit HCameraSetupModel(Hlong NumCameras);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Create a HALCON stereo model.
  HStereoModel CreateStereoModel(const HString& Method, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a HALCON stereo model.
  HStereoModel CreateStereoModel(const HString& Method, const HString& GenParamName, const HTuple& GenParamValue) const;

  // Create a HALCON stereo model.
  HStereoModel CreateStereoModel(const char* Method, const char* GenParamName, const HTuple& GenParamValue) const;

  // Serialize a camera setup model.
  HSerializedItem SerializeCameraSetupModel() const;

  // Deserialize a serialized camera setup model.
  void DeserializeCameraSetupModel(const HSerializedItem& SerializedItemHandle);

  // Store a camera setup model into a file.
  void WriteCameraSetupModel(const HString& FileName) const;

  // Store a camera setup model into a file.
  void WriteCameraSetupModel(const char* FileName) const;

  // Restore a camera setup model from a file.
  void ReadCameraSetupModel(const HString& FileName);

  // Restore a camera setup model from a file.
  void ReadCameraSetupModel(const char* FileName);

  // Get generic camera setup model parameters.
  HTuple GetCameraSetupParam(const HTuple& CameraIdx, const HString& GenParamName) const;

  // Get generic camera setup model parameters.
  HTuple GetCameraSetupParam(Hlong CameraIdx, const HString& GenParamName) const;

  // Get generic camera setup model parameters.
  HTuple GetCameraSetupParam(Hlong CameraIdx, const char* GenParamName) const;

  // Set generic camera setup model parameters.
  void SetCameraSetupParam(const HTuple& CameraIdx, const HString& GenParamName, const HTuple& GenParamValue) const;

  // Set generic camera setup model parameters.
  void SetCameraSetupParam(Hlong CameraIdx, const HString& GenParamName, double GenParamValue) const;

  // Set generic camera setup model parameters.
  void SetCameraSetupParam(Hlong CameraIdx, const char* GenParamName, double GenParamValue) const;

  // Define type, parameters, and relative pose of a camera in a camera setup model.
  void SetCameraSetupCamParam(const HTuple& CameraIdx, const HTuple& CameraType, const HCamPar& CameraParam, const HTuple& CameraPose) const;

  // Define type, parameters, and relative pose of a camera in a camera setup model.
  void SetCameraSetupCamParam(const HTuple& CameraIdx, const HString& CameraType, const HCamPar& CameraParam, const HTuple& CameraPose) const;

  // Define type, parameters, and relative pose of a camera in a camera setup model.
  void SetCameraSetupCamParam(const HTuple& CameraIdx, const char* CameraType, const HCamPar& CameraParam, const HTuple& CameraPose) const;

  // Create a model for a setup of calibrated cameras.
  void CreateCameraSetupModel(Hlong NumCameras);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HCameraSetupModel> HCameraSetupModelArrayRef;
typedef HSmartPtr< HCameraSetupModelArrayRef > HCameraSetupModelArrayPtr;


// Represents multiple tool instances
class LIntExport HCameraSetupModelArray : public HToolArray
{

public:

  // Create empty array
  HCameraSetupModelArray();

  // Create array from native array of tool instances
  HCameraSetupModelArray(HCameraSetupModel* classes, Hlong length);

  // Copy constructor
  HCameraSetupModelArray(const HCameraSetupModelArray &tool_array);

  // Destructor
  virtual ~HCameraSetupModelArray();

  // Assignment operator
  HCameraSetupModelArray &operator=(const HCameraSetupModelArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HCameraSetupModel* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HCameraSetupModelArrayPtr *mArrayPtr;
};

}

#endif
