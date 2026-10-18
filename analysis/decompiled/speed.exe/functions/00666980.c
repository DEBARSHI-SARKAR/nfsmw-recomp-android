/* speed.exe 00666980 FUN_00666980; analysis pseudocode, not buildable source.
 * calls 00666470 FUN_00666470
 */

int __thiscall FUN_00666980(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00666470(*(undefined4 *)(param_1 + 4),0x6e1da6ac);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return param_2;
}

