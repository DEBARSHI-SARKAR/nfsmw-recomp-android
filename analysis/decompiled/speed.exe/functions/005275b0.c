/* speed.exe 005275b0 FUN_005275b0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_005275b0(int param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  undefined4 uVar2;
  
  if (param_2 == 0xc407210) {
    FUN_00516be0();
    return;
  }
  if (param_2 == -0x362cf978) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    if (param_2 != -0x25a478ee) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  FUN_00514cc0(uVar2);
  if ((((*(int *)(extraout_EDX + 0x10) != 0) &&
       (iVar1 = FUN_00516af0(*(int *)(extraout_EDX + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x6042a783), iVar1 != 0)) &&
     (iVar1 = FUN_005b1360(0x16a259), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

