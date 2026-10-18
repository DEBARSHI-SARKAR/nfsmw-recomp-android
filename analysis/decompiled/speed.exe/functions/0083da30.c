/* speed.exe 0083da30 FUN_0083da30; analysis pseudocode, not buildable source.
 * calls 0083d360 FUN_0083d360
 * calls 0084bcb0 GetTickCount
 * calls 0083d010 FUN_0083d010
 */

void FUN_0083da30(undefined4 param_1,undefined4 param_2,int param_3)

{
  DWORD DVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_3 + 0x28) == 0) || (*(int *)(param_3 + 0x28) == 4)) {
    *(undefined4 *)(param_3 + 0x1c) = 0;
  }
  if (*(int *)(param_3 + 0x1c) != 0) {
    DVar1 = GetTickCount();
    if ((int)(*(int *)(param_3 + 0x1c) - DVar1) < 0) {
      local_14 = *(undefined4 *)(param_3 + 4);
      local_18 = 0;
      local_10 = 0x74696d65;
      local_c = 0;
      local_8 = 0;
      (**(code **)(param_3 + 0x20))(param_3,&local_18,*(undefined4 *)(param_3 + 0x24));
      if (*(int *)(param_3 + 0x28) != 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0;
        FUN_0083d360();
        FUN_0083d010((undefined1 *)(param_3 + 0x2c),PTR_s__CNCL__0090d328);
        *(undefined1 *)(param_3 + 0x2c) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
      }
    }
  }
  return;
}

