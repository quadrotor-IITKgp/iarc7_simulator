#ifndef COMMON_H
#define COMMON_H

#include <cmath>

struct Twist {
  double lin_x, lin_y, lin_z;
  double ang_x, ang_y, ang_z;
};

struct Pose {
  double x, y, z;
  double quat_x, quat_y, quat_z, quat_w;
  double covariance[36];
  Twist velocity;
};

class Common
{
public:
  Common();
  void quatToEuler(double q_w, double q_x, double q_y, double q_z, double& yaw, double& pitch, double& roll);
  void setQuadPose(Pose p);
  Pose getQuadPose();
  void setgBot0Pose(Pose p);
  Pose getgBot0Pose();
  void setgBot1Pose(Pose p);
  Pose getgBot1Pose();
  void setgBot2Pose(Pose p);
  Pose getgBot2Pose();
void setgBot3Pose(Pose p);
  Pose getgBot3Pose();
void setgBot4Pose(Pose p);
  Pose getgBot4Pose();
  void setgBot5Pose(Pose p);
  Pose getgBot5Pose();
void setgBot6Pose(Pose p);
  Pose getgBot6Pose();
void setgBot7Pose(Pose p);
  Pose getgBot7Pose();
void setgBot8Pose(Pose p);
  Pose getgBot8Pose();
void setgBot9Pose(Pose p);
  Pose getgBot9Pose();
void setgBot10Pose(Pose p);
  Pose getgBot10Pose();
void setgBot11Pose(Pose p);
  Pose getgBot11Pose();
void setgBot12Pose(Pose p);
  Pose getgBot12Pose();
void setgBot13Pose(Pose p);
  Pose getgBot13Pose();


void setgBot4EstiPose(Pose p);
  Pose getgBot4EstiPose();
void setgBot5EstiPose(Pose p);
  Pose getgBot5EstiPose();
void setgBot6EstiPose(Pose p);
  Pose getgBot6EstiPose();
void setgBot7EstiPose(Pose p);
  Pose getgBot7EstiPose();
void setgBot8EstiPose(Pose p);
  Pose getgBot8EstiPose();
void setgBot9EstiPose(Pose p);
  Pose getgBot9EstiPose();
void setgBot10EstiPose(Pose p);
  Pose getgBot10EstiPose();
void setgBot11EstiPose(Pose p);
  Pose getgBot11EstiPose();
void setgBot12EstiPose(Pose p);
  Pose getgBot12EstiPose();
void setgBot13EstiPose(Pose p);
  Pose getgBot13EstiPose();

protected:
  Pose quadPose, gBot0Pose, gBot1Pose, gBot2Pose, gBot3Pose, gBot4Pose, gBot5Pose, gBot6Pose, gBot7Pose, gBot8Pose, gBot9Pose, gBot10Pose, gBot11Pose, gBot12Pose, gBot13Pose;
  Pose gBot4EstiPose, gBot5EstiPose, gBot6EstiPose, gBot7EstiPose, gBot8EstiPose, gBot9EstiPose, gBot10EstiPose, gBot11EstiPose, gBot12EstiPose, gBot13EstiPose;
};

#endif // COMMON_H
