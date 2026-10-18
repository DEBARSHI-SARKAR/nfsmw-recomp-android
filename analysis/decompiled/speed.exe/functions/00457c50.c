/* speed.exe 00457c50 FUN_00457c50; analysis pseudocode, not buildable source.
 * calls 00457aa0 FUN_00457aa0
 */

undefined2 * __thiscall
FUN_00457c50(undefined2 *param_1,int param_2,uint param_3,undefined2 param_4,ushort param_5,
            char param_6)

{
  ushort uVar1;
  uint uVar2;
  
  *param_1 = param_4;
  param_1[1] = (short)param_3;
  param_1[2] = (short)param_2;
  if ((param_6 == '\0') || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8000;
  }
  uVar2 = 0;
  param_1[3] = uVar1 | param_5;
  if (param_3 != 0) {
    do {
      FUN_00457aa0(uVar2,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return param_1;
}

