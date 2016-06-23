#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED

void Cam_FollowEntity(struct camera_s *cam, struct entity_s *ent, float dx, float dz);
void Cam_PlayFlyBy(float time);

#endif // CAMERA_H_INCLUDED
