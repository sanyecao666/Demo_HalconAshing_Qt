/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HHOMMAT2D
#define HCPP_HHOMMAT2D

namespace HalconCpp
{

// Represents a homogeneous 2D transformation matrix.
class LIntExport HHomMat2D : public HDataBase
{

public:

  // Copy constructor
  HHomMat2D(const HHomMat2D& source) : HDataBase(source) {}

  // Constructor from HTuple
  explicit HHomMat2D(const HTuple& tuple) : HDataBase(tuple) {}

  // Deep copy of all data represented by this object instance
  HHomMat2D Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // hom_mat2d_identity: Generate the homogeneous transformation matrix of the identical 2D transformation.
  explicit HHomMat2D();




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Read the geo coding from an ARC/INFO world file.
  void ReadWorldFile(const HString& FileName);

  // Read the geo coding from an ARC/INFO world file.
  void ReadWorldFile(const char* FileName);

  // Apply a projective transformation to an XLD contour.
  HXLDCont ProjectiveTransContourXld(const HXLDCont& Contours) const;

  // Apply an arbitrary affine transformation to XLD polygons.
  HXLDPoly AffineTransPolygonXld(const HXLDPoly& Polygons) const;

  // Apply an arbitrary affine 2D transformation to XLD contours.
  HXLDCont AffineTransContourXld(const HXLDCont& Contours) const;

  // Deserialize a serialized homogeneous 2D transformation matrix.
  void DeserializeHomMat2d(const HSerializedItem& SerializedItemHandle);

  // Serialize a homogeneous 2D transformation matrix.
  HSerializedItem SerializeHomMat2d() const;

  // Perform a bundle adjustment of an image mosaic.
  static HHomMat2DArray BundleAdjustMosaic(Hlong NumImages, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const HString& Transformation, HTuple* Rows, HTuple* Cols, HTuple* Error);

  // Perform a bundle adjustment of an image mosaic.
  static HHomMat2DArray BundleAdjustMosaic(Hlong NumImages, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const HString& Transformation, HTuple* Rows, HTuple* Cols, double* Error);

  // Perform a bundle adjustment of an image mosaic.
  static HHomMat2DArray BundleAdjustMosaic(Hlong NumImages, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const char* Transformation, HTuple* Rows, HTuple* Cols, double* Error);

  // Compute a projective transformation matrix and the radial distortion coefficient between two images by finding correspondences between points based on known approximations of the projective transformation matrix and the radial distortion coefficient.
  HHomMat2D ProjMatchPointsDistortionRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, double KappaGuide, double DistanceTolerance, const HTuple& MatchThreshold, const HString& EstimationMethod, const HTuple& DistanceThreshold, Hlong RandSeed, double* Kappa, double* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix and the radial distortion coefficient between two images by finding correspondences between points based on known approximations of the projective transformation matrix and the radial distortion coefficient.
  HHomMat2D ProjMatchPointsDistortionRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, double KappaGuide, double DistanceTolerance, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Kappa, double* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix and the radial distortion coefficient between two images by finding correspondences between points based on known approximations of the projective transformation matrix and the radial distortion coefficient.
  HHomMat2D ProjMatchPointsDistortionRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, double KappaGuide, double DistanceTolerance, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Kappa, double* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix between two images and the radial distortion coefficient by automatically finding correspondences between points.
  double ProjMatchPointsDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, const HTuple& Rotation, const HTuple& MatchThreshold, const HString& EstimationMethod, const HTuple& DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute a projective transformation matrix between two images and the radial distortion coefficient by automatically finding correspondences between points.
  double ProjMatchPointsDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute a projective transformation matrix between two images and the radial distortion coefficient by automatically finding correspondences between points.
  double ProjMatchPointsDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute a projective transformation matrix between two images by finding correspondences between points based on a known approximation of the projective transformation matrix.
  HHomMat2D ProjMatchPointsRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, double DistanceTolerance, const HTuple& MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix between two images by finding correspondences between points based on a known approximation of the projective transformation matrix.
  HHomMat2D ProjMatchPointsRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, double DistanceTolerance, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix between two images by finding correspondences between points based on a known approximation of the projective transformation matrix.
  HHomMat2D ProjMatchPointsRansacGuided(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, double DistanceTolerance, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points1, HTuple* Points2) const;

  // Compute a projective transformation matrix between two images by finding correspondences between points.
  HTuple ProjMatchPointsRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, const HTuple& Rotation, const HTuple& MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points2);

  // Compute a projective transformation matrix between two images by finding correspondences between points.
  HTuple ProjMatchPointsRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points2);

  // Compute a projective transformation matrix between two images by finding correspondences between points.
  HTuple ProjMatchPointsRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* Points2);

  // Compute a projective transformation matrix and the radial distortion coefficient using given image point correspondences.
  double VectorToProjHomMat2dDistortion(const HTuple& Points1Row, const HTuple& Points1Col, const HTuple& Points2Row, const HTuple& Points2Col, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, Hlong ImageWidth, Hlong ImageHeight, const HString& Method, double* Error);

  // Compute a projective transformation matrix and the radial distortion coefficient using given image point correspondences.
  double VectorToProjHomMat2dDistortion(const HTuple& Points1Row, const HTuple& Points1Col, const HTuple& Points2Row, const HTuple& Points2Col, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, Hlong ImageWidth, Hlong ImageHeight, const char* Method, double* Error);

  // Compute a homogeneous transformation matrix using given point correspondences.
  void HomVectorToProjHomMat2d(const HTuple& Px, const HTuple& Py, const HTuple& Pw, const HTuple& Qx, const HTuple& Qy, const HTuple& Qw, const HString& Method);

  // Compute a homogeneous transformation matrix using given point correspondences.
  void HomVectorToProjHomMat2d(const HTuple& Px, const HTuple& Py, const HTuple& Pw, const HTuple& Qx, const HTuple& Qy, const HTuple& Qw, const char* Method);

  // Compute a projective transformation matrix using given point correspondences.
  HTuple VectorToProjHomMat2d(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy, const HString& Method, const HTuple& CovXX1, const HTuple& CovYY1, const HTuple& CovXY1, const HTuple& CovXX2, const HTuple& CovYY2, const HTuple& CovXY2);

  // Compute a projective transformation matrix using given point correspondences.
  HTuple VectorToProjHomMat2d(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy, const char* Method, const HTuple& CovXX1, const HTuple& CovYY1, const HTuple& CovXY1, const HTuple& CovXX2, const HTuple& CovYY2, const HTuple& CovXY2);

  // Compute the affine transformation parameters from a homogeneous 2D transformation matrix.
  double HomMat2dToAffinePar(double* Sy, double* Phi, double* Theta, double* Tx, double* Ty) const;

  // Compute a rigid affine transformation from points and angles.
  void VectorAngleToRigid(const HTuple& Row1, const HTuple& Column1, const HTuple& Angle1, const HTuple& Row2, const HTuple& Column2, const HTuple& Angle2);

  // Compute a rigid affine transformation from points and angles.
  void VectorAngleToRigid(double Row1, double Column1, double Angle1, double Row2, double Column2, double Angle2);

  // Approximate an affine transformation from point-to-line correspondences.
  void PointLineToHomMat2d(const HString& TransformationType, const HTuple& Px, const HTuple& Py, const HTuple& L1x, const HTuple& L1y, const HTuple& L2x, const HTuple& L2y);

  // Approximate an affine transformation from point-to-line correspondences.
  void PointLineToHomMat2d(const char* TransformationType, const HTuple& Px, const HTuple& Py, const HTuple& L1x, const HTuple& L1y, const HTuple& L2x, const HTuple& L2y);

  // Approximate a rigid affine transformation from point correspondences.
  void VectorToRigid(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy);

  // Approximate an similarity transformation from point correspondences.
  void VectorToSimilarity(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy);

  // Approximate an anisotropic similarity transformation from point correspondences.
  void VectorToAniso(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy);

  // Approximate an affine transformation from point correspondences.
  void VectorToHomMat2d(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy);

  // Project pixel coordinates using a homogeneous projective transformation matrix.
  void ProjectiveTransPixel(const HTuple& Row, const HTuple& Col, HTuple* RowTrans, HTuple* ColTrans) const;

  // Project pixel coordinates using a homogeneous projective transformation matrix.
  void ProjectiveTransPixel(double Row, double Col, double* RowTrans, double* ColTrans) const;

  // Project a homogeneous 2D point using a projective transformation matrix.
  HTuple ProjectiveTransPoint2d(const HTuple& Px, const HTuple& Py, const HTuple& Pw, HTuple* Qy, HTuple* Qw) const;

  // Project a homogeneous 2D point using a projective transformation matrix.
  double ProjectiveTransPoint2d(double Px, double Py, double Pw, double* Qy, double* Qw) const;

  // Apply an arbitrary affine 2D transformation to pixel coordinates.
  void AffineTransPixel(const HTuple& Row, const HTuple& Col, HTuple* RowTrans, HTuple* ColTrans) const;

  // Apply an arbitrary affine 2D transformation to pixel coordinates.
  void AffineTransPixel(double Row, double Col, double* RowTrans, double* ColTrans) const;

  // Apply an arbitrary affine 2D transformation to points.
  HTuple AffineTransPoint2d(const HTuple& Px, const HTuple& Py, HTuple* Qy) const;

  // Apply an arbitrary affine 2D transformation to points.
  double AffineTransPoint2d(double Px, double Py, double* Qy) const;

  // Compute the determinant of a homogeneous 2D transformation matrix.
  double HomMat2dDeterminant() const;

  // Transpose a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dTranspose() const;

  // Invert a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dInvert() const;

  // Multiply two homogeneous 2D transformation matrices.
  HHomMat2D HomMat2dCompose(const HHomMat2D& HomMat2DRight) const;

  // Add a reflection to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dReflectLocal(const HTuple& Px, const HTuple& Py) const;

  // Add a reflection to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dReflectLocal(double Px, double Py) const;

  // Add a reflection to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dReflect(const HTuple& Px, const HTuple& Py, const HTuple& Qx, const HTuple& Qy) const;

  // Add a reflection to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dReflect(double Px, double Py, double Qx, double Qy) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlantLocal(const HTuple& Theta, const HString& Axis) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlantLocal(double Theta, const HString& Axis) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlantLocal(double Theta, const char* Axis) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlant(const HTuple& Theta, const HString& Axis, const HTuple& Px, const HTuple& Py) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlant(double Theta, const HString& Axis, double Px, double Py) const;

  // Add a slant to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dSlant(double Theta, const char* Axis, double Px, double Py) const;

  // Add a rotation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dRotateLocal(const HTuple& Phi) const;

  // Add a rotation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dRotateLocal(double Phi) const;

  // Add a rotation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dRotate(const HTuple& Phi, const HTuple& Px, const HTuple& Py) const;

  // Add a rotation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dRotate(double Phi, double Px, double Py) const;

  // Add a scaling to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dScaleLocal(const HTuple& Sx, const HTuple& Sy) const;

  // Add a scaling to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dScaleLocal(double Sx, double Sy) const;

  // Add a scaling to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dScale(const HTuple& Sx, const HTuple& Sy, const HTuple& Px, const HTuple& Py) const;

  // Add a scaling to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dScale(double Sx, double Sy, double Px, double Py) const;

  // Add a translation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dTranslateLocal(const HTuple& Tx, const HTuple& Ty) const;

  // Add a translation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dTranslateLocal(double Tx, double Ty) const;

  // Add a translation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dTranslate(const HTuple& Tx, const HTuple& Ty) const;

  // Add a translation to a homogeneous 2D transformation matrix.
  HHomMat2D HomMat2dTranslate(double Tx, double Ty) const;

  // Generate the homogeneous transformation matrix of the identical 2D transformation.
  void HomMat2dIdentity();

  // Compute the projective 3d reconstruction of points based on the fundamental matrix.
  void Reconst3dFromFundamentalMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const HTuple& CovFMat, HTuple* X, HTuple* Y, HTuple* Z, HTuple* W, HTuple* CovXYZW) const;

  // Compute the projective 3d reconstruction of points based on the fundamental matrix.
  void Reconst3dFromFundamentalMatrix(double Rows1, double Cols1, double Rows2, double Cols2, double CovRR1, double CovRC1, double CovCC1, double CovRR2, double CovRC2, double CovCC2, const HTuple& CovFMat, double* X, double* Y, double* Z, double* W, double* CovXYZW) const;

  // Compute the projective rectification of weakly calibrated binocular stereo images.
  HImage GenBinocularProjRectification(HImage* Map2, const HTuple& CovFMat, Hlong Width1, Hlong Height1, Hlong Width2, Hlong Height2, const HTuple& SubSampling, const HString& Mapping, HTuple* CovFMatRect, HHomMat2D* H1, HHomMat2D* H2) const;

  // Compute the projective rectification of weakly calibrated binocular stereo images.
  HImage GenBinocularProjRectification(HImage* Map2, const HTuple& CovFMat, Hlong Width1, Hlong Height1, Hlong Width2, Hlong Height2, Hlong SubSampling, const HString& Mapping, HTuple* CovFMatRect, HHomMat2D* H1, HHomMat2D* H2) const;

  // Compute the projective rectification of weakly calibrated binocular stereo images.
  HImage GenBinocularProjRectification(HImage* Map2, const HTuple& CovFMat, Hlong Width1, Hlong Height1, Hlong Width2, Hlong Height2, Hlong SubSampling, const char* Mapping, HTuple* CovFMatRect, HHomMat2D* H1, HHomMat2D* H2) const;

  // Compute the fundamental matrix and the radial distortion coefficient given a set of image point correspondences and reconstruct 3D points.
  double VectorToFundamentalMatrixDistortion(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, Hlong ImageWidth, Hlong ImageHeight, const HString& Method, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* W);

  // Compute the fundamental matrix and the radial distortion coefficient given a set of image point correspondences and reconstruct 3D points.
  double VectorToFundamentalMatrixDistortion(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, Hlong ImageWidth, Hlong ImageHeight, const char* Method, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* W);

  // Compute the fundamental matrix from the relative orientation of two cameras.
  HTuple RelPoseToFundamentalMatrix(const HPose& RelPose, const HTuple& CovRelPose, const HCamPar& CamPar1, const HCamPar& CamPar2);

  // Compute the fundamental matrix from an essential matrix.
  HHomMat2D EssentialToFundamentalMatrix(const HTuple& CovEMat, const HHomMat2D& CamMat1, const HHomMat2D& CamMat2, HTuple* CovFMat) const;

  // Compute the essential matrix given image point correspondences and known camera matrices and reconstruct 3D points.
  HHomMat2D VectorToEssentialMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const HHomMat2D& CamMat2, const HString& Method, HTuple* CovEMat, HTuple* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* CovXYZ) const;

  // Compute the essential matrix given image point correspondences and known camera matrices and reconstruct 3D points.
  HHomMat2D VectorToEssentialMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const HHomMat2D& CamMat2, const HString& Method, HTuple* CovEMat, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* CovXYZ) const;

  // Compute the essential matrix given image point correspondences and known camera matrices and reconstruct 3D points.
  HHomMat2D VectorToEssentialMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const HHomMat2D& CamMat2, const char* Method, HTuple* CovEMat, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* CovXYZ) const;

  // Compute the fundamental matrix given a set of image point correspondences and reconstruct 3D points.
  HTuple VectorToFundamentalMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const HString& Method, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* W, HTuple* CovXYZW);

  // Compute the fundamental matrix given a set of image point correspondences and reconstruct 3D points.
  HTuple VectorToFundamentalMatrix(const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& CovRR1, const HTuple& CovRC1, const HTuple& CovCC1, const HTuple& CovRR2, const HTuple& CovRC2, const HTuple& CovCC2, const char* Method, double* Error, HTuple* X, HTuple* Y, HTuple* Z, HTuple* W, HTuple* CovXYZW);

  // Compute the fundamental matrix and the radial distortion coefficient for a pair of stereo images by automatically finding correspondences between image points.
  double MatchFundamentalMatrixDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, const HTuple& Rotation, const HTuple& MatchThreshold, const HString& EstimationMethod, const HTuple& DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute the fundamental matrix and the radial distortion coefficient for a pair of stereo images by automatically finding correspondences between image points.
  double MatchFundamentalMatrixDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute the fundamental matrix and the radial distortion coefficient for a pair of stereo images by automatically finding correspondences between image points.
  double MatchFundamentalMatrixDistortionRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute the essential matrix for a pair of stereo images by automatically finding correspondences between image points.
  HHomMat2D MatchEssentialMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HHomMat2D& CamMat2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, const HTuple& Rotation, const HTuple& MatchThreshold, const HString& EstimationMethod, const HTuple& DistanceThreshold, Hlong RandSeed, HTuple* CovEMat, HTuple* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute the essential matrix for a pair of stereo images by automatically finding correspondences between image points.
  HHomMat2D MatchEssentialMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HHomMat2D& CamMat2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* CovEMat, double* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute the essential matrix for a pair of stereo images by automatically finding correspondences between image points.
  HHomMat2D MatchEssentialMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HHomMat2D& CamMat2, const char* GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, HTuple* CovEMat, double* Error, HTuple* Points1, HTuple* Points2) const;

  // Compute the fundamental matrix for a pair of stereo images by automatically finding correspondences between image points.
  HTuple MatchFundamentalMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, const HTuple& Rotation, const HTuple& MatchThreshold, const HString& EstimationMethod, const HTuple& DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute the fundamental matrix for a pair of stereo images by automatically finding correspondences between image points.
  HTuple MatchFundamentalMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HString& GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const HString& EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Compute the fundamental matrix for a pair of stereo images by automatically finding correspondences between image points.
  HTuple MatchFundamentalMatrixRansac(const HImage& Image1, const HImage& Image2, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const char* GrayMatchMethod, Hlong MaskSize, Hlong RowMove, Hlong ColMove, Hlong RowTolerance, Hlong ColTolerance, double Rotation, Hlong MatchThreshold, const char* EstimationMethod, double DistanceThreshold, Hlong RandSeed, double* Error, HTuple* Points1, HTuple* Points2);

  // Apply a projective transformation to a region.
  HRegion ProjectiveTransRegion(const HRegion& Regions, const HString& Interpolation) const;

  // Apply a projective transformation to a region.
  HRegion ProjectiveTransRegion(const HRegion& Regions, const char* Interpolation) const;

  // Apply an arbitrary affine 2D transformation to regions.
  HRegion AffineTransRegion(const HRegion& Region, const HString& Interpolate) const;

  // Apply an arbitrary affine 2D transformation to regions.
  HRegion AffineTransRegion(const HRegion& Region, const char* Interpolate) const;

  // Apply a projective transformation to an image and specify the output image size.
  HImage ProjectiveTransImageSize(const HImage& Image, const HString& Interpolation, Hlong Width, Hlong Height, const HString& TransformDomain) const;

  // Apply a projective transformation to an image and specify the output image size.
  HImage ProjectiveTransImageSize(const HImage& Image, const char* Interpolation, Hlong Width, Hlong Height, const char* TransformDomain) const;

  // Apply a projective transformation to an image.
  HImage ProjectiveTransImage(const HImage& Image, const HString& Interpolation, const HString& AdaptImageSize, const HString& TransformDomain) const;

  // Apply a projective transformation to an image.
  HImage ProjectiveTransImage(const HImage& Image, const char* Interpolation, const char* AdaptImageSize, const char* TransformDomain) const;

  // Apply an arbitrary affine 2D transformation to an image and specify the output image size.
  HImage AffineTransImageSize(const HImage& Image, const HString& Interpolation, Hlong Width, Hlong Height) const;

  // Apply an arbitrary affine 2D transformation to an image and specify the output image size.
  HImage AffineTransImageSize(const HImage& Image, const char* Interpolation, Hlong Width, Hlong Height) const;

  // Apply an arbitrary affine 2D transformation to images.
  HImage AffineTransImage(const HImage& Image, const HString& Interpolation, const HString& AdaptImageSize) const;

  // Apply an arbitrary affine 2D transformation to images.
  HImage AffineTransImage(const HImage& Image, const char* Interpolation, const char* AdaptImageSize) const;

  // Approximate an affine map from a displacement vector field.
  void VectorFieldToHomMat2d(const HImage& VectorField);

  // Compute a camera matrix from internal camera parameters.
  void CamParToCamMat(const HCamPar& CameraParam, Hlong* ImageWidth, Hlong* ImageHeight);

  // Compute the internal camera parameters from a camera matrix.
  HCamPar CamMatToCamPar(double Kappa, Hlong ImageWidth, Hlong ImageHeight) const;

  // Perform a self-calibration of a stationary projective camera.
  static HHomMat2DArray StationaryCameraSelfCalibration(Hlong NumImages, Hlong ImageWidth, Hlong ImageHeight, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const HString& EstimationMethod, const HTuple& CameraModel, const HString& FixedCameraParams, HTuple* Kappa, HHomMat2DArray* RotationMatrices, HTuple* X, HTuple* Y, HTuple* Z, HTuple* Error);

  // Perform a self-calibration of a stationary projective camera.
  static HHomMat2DArray StationaryCameraSelfCalibration(Hlong NumImages, Hlong ImageWidth, Hlong ImageHeight, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const HString& EstimationMethod, const HTuple& CameraModel, const HString& FixedCameraParams, double* Kappa, HHomMat2DArray* RotationMatrices, HTuple* X, HTuple* Y, HTuple* Z, double* Error);

  // Perform a self-calibration of a stationary projective camera.
  static HHomMat2DArray StationaryCameraSelfCalibration(Hlong NumImages, Hlong ImageWidth, Hlong ImageHeight, Hlong ReferenceImage, const HTuple& MappingSource, const HTuple& MappingDest, const HHomMat2DArray& HomMatrices2D, const HTuple& Rows1, const HTuple& Cols1, const HTuple& Rows2, const HTuple& Cols2, const HTuple& NumCorrespondences, const char* EstimationMethod, const HTuple& CameraModel, const char* FixedCameraParams, double* Kappa, HHomMat2DArray* RotationMatrices, HTuple* X, HTuple* Y, HTuple* Z, double* Error);

};

class LIntExport HHomMat2DArray : public HDataArray
{
public:
  HHomMat2DArray();
  HHomMat2DArray(HHomMat2D* classes, Hlong length);
  /* Define a default constructor to prevent compilers that support
   * C++11 R-Value References v3.0 declaring an implicite move
   * assignment/constructor. */
  ~HHomMat2DArray() {}
protected:
  virtual void CreateArray(Hlong length);
  virtual int GetFixedSize();
};

}

#endif
