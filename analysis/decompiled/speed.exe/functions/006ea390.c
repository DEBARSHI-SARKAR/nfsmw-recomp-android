/* speed.exe 006ea390 FUN_006ea390; analysis pseudocode, not buildable source.
 * calls 00446e80 FUN_00446e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ea390(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x2b8) = *param_2;
  *(undefined4 *)(param_1 + 700) = uVar1;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  uVar1 = param_2[2];
  uVar2 = *param_2;
  *(float *)(param_1 + 0x374) = -(float)param_2[1];
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  *(undefined4 *)(param_1 + 0x37c) = uVar2;
  *(float *)(param_1 + 0x2c8) = (float)(param_3 & 0xffff) * _DAT_00890980;
  FUN_00446e80(param_2,param_3);
  return;
}

