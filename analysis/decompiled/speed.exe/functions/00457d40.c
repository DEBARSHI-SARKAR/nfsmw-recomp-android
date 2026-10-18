/* speed.exe 00457d40 FUN_00457d40; analysis pseudocode, not buildable source.
 * calls 004574f0 FUN_004574f0
 */

undefined4 * __thiscall
FUN_00457d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5,
            byte param_6,int param_7)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_4;
  iVar1 = FUN_004574f0(param_3);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 0xc);
  *(byte *)((int)param_1 + 0xb) = param_6;
  if ((param_5 != '\0') && ((param_6 & 0x10) != 0)) {
    param_1[1] = param_4 - param_7;
  }
  return param_1;
}

