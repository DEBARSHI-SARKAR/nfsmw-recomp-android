/* speed.exe 0057f440 FUN_0057f440; analysis pseudocode, not buildable source.
 * calls 0057f390 FUN_0057f390
 * calls 00573140 FUN_00573140
 * calls 005251a0 FUN_005251a0
 */

void __thiscall FUN_0057f440(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_0057f390(param_2,param_3);
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_00573140("PREVIEWBAR_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  return;
}

