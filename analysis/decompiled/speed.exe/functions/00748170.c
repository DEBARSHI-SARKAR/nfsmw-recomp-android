/* speed.exe 00748170 FUN_00748170; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 00460ca0 FUN_00460ca0
 */

undefined1 * __thiscall
FUN_00748170(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00739a70(0xffffffff,0,0,0);
  param_1[3] = param_8;
  param_1[1] = param_2;
  param_1[0x31a] = param_7;
  param_1[0x319] = param_6;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = 0;
  param_1[0x318] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0xc4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 8);
  FUN_00460ca0(param_1 + 0x324,param_5,0x10);
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined2 *)(param_1 + 0x350) = 0;
  param_1[0x334] = 0;
  return param_1;
}

