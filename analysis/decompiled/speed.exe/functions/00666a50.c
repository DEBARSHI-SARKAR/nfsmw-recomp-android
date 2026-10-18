/* speed.exe 00666a50 FUN_00666a50; analysis pseudocode, not buildable source.
 * calls 00666470 FUN_00666470
 */

void __thiscall FUN_00666a50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00666470(uVar1,0x6e1da6ac);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}

