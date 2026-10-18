/* speed.exe 0064b460 FUN_0064b460; analysis pseudocode, not buildable source.
 * calls 00724ff0 FUN_00724ff0
 * calls 0072ba80 FUN_0072ba80
 * calls 0044b6b0 FUN_0044b6b0
 * calls 00725060 FUN_00725060
 * calls 0072c5c0 FUN_0072c5c0
 * calls 00460bf0 FUN_00460bf0
 * calls 00728c60 FUN_00728c60
 */

void FUN_0064b460(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00460bf0("SCENERY_GROUP_DOOR");
  iVar2 = FUN_00728c60(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00724ff0("SCENERY_GROUP_DOOR");
    if (iVar2 != 0) {
      uVar1 = FUN_00460bf0("SCENERY_GROUP_DOOR");
      FUN_00725060(uVar1);
      FUN_0072c5c0(uVar1,0);
      FUN_0072ba80("SCENERY_GROUP_DOOR");
    }
  }
  FUN_0044b6b0();
  return;
}

