/* speed.exe 0075b400 FUN_0075b400; analysis pseudocode, not buildable source.
 * calls 00500b00 FUN_00500b00
 * calls 00759ff0 FUN_00759ff0
 * calls 00507dc0 FUN_00507dc0
 */

undefined4 __thiscall FUN_0075b400(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00904a00;
  uVar2 = 0;
  if (param_3 != 0) {
    FUN_00759ff0(*(undefined4 *)(param_2 + 0x10),0,1);
    uVar2 = uVar1;
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0xe) = 1;
  FUN_00507dc0(*(undefined4 *)(param_2 + 8),&LAB_0073ab00,param_2,uVar2);
  uVar1 = FUN_00500b00(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  return 1;
}

