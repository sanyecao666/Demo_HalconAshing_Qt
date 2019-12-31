/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HMUTEX
#define HCPP_HMUTEX

namespace HalconCpp
{

// Represents an instance of a mutex synchronization object.
class LIntExport HMutex : public HToolBase
{

public:

  // Create an uninitialized instance
  HMutex():HToolBase() {}

  // Copy constructor
  HMutex(const HMutex& source) : HToolBase(source) {}

  // Create HMutex from handle, taking ownership
  explicit HMutex(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_mutex: Create a mutual exclusion synchronization object.
  explicit HMutex(const HTuple& AttribName, const HTuple& AttribValue);

  // create_mutex: Create a mutual exclusion synchronization object.
  explicit HMutex(const HString& AttribName, const HString& AttribValue);

  // create_mutex: Create a mutual exclusion synchronization object.
  explicit HMutex(const char* AttribName, const char* AttribValue);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Unlock a mutex synchronization object.
  void UnlockMutex() const;

  // Lock a mutex synchronization object.
  Hlong TryLockMutex() const;

  // Lock a mutex synchronization object.
  void LockMutex() const;

  // Create a mutual exclusion synchronization object.
  void CreateMutex(const HTuple& AttribName, const HTuple& AttribValue);

  // Create a mutual exclusion synchronization object.
  void CreateMutex(const HString& AttribName, const HString& AttribValue);

  // Create a mutual exclusion synchronization object.
  void CreateMutex(const char* AttribName, const char* AttribValue);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HMutex> HMutexArrayRef;
typedef HSmartPtr< HMutexArrayRef > HMutexArrayPtr;


// Represents multiple tool instances
class LIntExport HMutexArray : public HToolArray
{

public:

  // Create empty array
  HMutexArray();

  // Create array from native array of tool instances
  HMutexArray(HMutex* classes, Hlong length);

  // Copy constructor
  HMutexArray(const HMutexArray &tool_array);

  // Destructor
  virtual ~HMutexArray();

  // Assignment operator
  HMutexArray &operator=(const HMutexArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HMutex* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HMutexArrayPtr *mArrayPtr;
};

}

#endif
