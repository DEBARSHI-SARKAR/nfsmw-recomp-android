/* speed.exe 00707900 FUN_00707900; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 * calls 00766130 FUN_00766130
 */

undefined4 * __thiscall
FUN_00707900(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087fa88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_008b1d98;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = DAT_008a2fb4;
  param_1[8] = DAT_008a2fb8;
  param_1[9] = DAT_008a2fbc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *param_1 = &PTR_FUN_008b1fa0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = DAT_00925ae8;
  param_1[0x12] = 0;
  param_1[0x13] = DAT_00925ae8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x6b;
  param_1[0x19] = 0x6b;
  param_1[0x1a] = DAT_008a2fb4;
  param_1[0x1b] = DAT_008a2fb8;
  local_4 = 0;
  param_1[0x1c] = DAT_008a2fbc;
  if (param_3 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_3);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00403700);
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x48))();
        if (iVar1 != 0) {
          iVar1 = FUN_00766130();
          if (iVar1 != 0x6b) {
            uVar3 = FUN_00766130();
            param_1[0x18] = uVar3;
          }
        }
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

