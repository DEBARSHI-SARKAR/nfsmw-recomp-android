/* speed.exe 0057f390 FUN_0057f390; analysis pseudocode, not buildable source.
 * calls 005251e0 FUN_005251e0
 * calls 00573140 FUN_00573140
 * calls 005251a0 FUN_005251a0
 */

void __thiscall FUN_0057f390(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_00573140("BASE_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_00573140("FILLBAR_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_00573140("HANDLE_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = FUN_00573140("LEFT_CAP_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_00573140("RIGHT_CAP_%s",param_3);
    uVar1 = FUN_005251a0(param_2,uVar1);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = FUN_00573140("VALUE_%s",param_3);
    uVar1 = FUN_005251e0(param_2,uVar1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

