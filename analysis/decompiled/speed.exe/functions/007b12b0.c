/* speed.exe 007b12b0 FUN_007b12b0; analysis pseudocode, not buildable source.
 * calls 0056f120 FUN_0056f120
 * calls 007afc90 FUN_007afc90
 * calls 007aff10 FUN_007aff10
 * calls 0056f7b0 FUN_0056f7b0
 */

undefined4 * __thiscall FUN_007b12b0(undefined4 *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008830cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7248;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  param_1[4] = &PTR_LAB_008b7244;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 5;
  param_1[0xb] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4 = 0;
  if (DAT_009b9ec4 != 0) {
    iVar2 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11));
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_0056f7b0();
      param_2 = (float)fVar3;
      goto LAB_007b1370;
    }
  }
  param_2 = -1.0;
LAB_007b1370:
  uVar1 = param_1[1];
  fVar3 = (float10)FUN_007afc90();
  FUN_007aff10(uVar1,"HEAT_METER",0x3f800000,0x40a00000,param_2,(float)fVar3);
  ExceptionList = local_c;
  return param_1;
}

