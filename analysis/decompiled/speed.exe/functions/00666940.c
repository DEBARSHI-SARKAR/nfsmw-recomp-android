/* speed.exe 00666940 FUN_00666940; analysis pseudocode, not buildable source.
 * calls 00666390 FUN_00666390
 */

int __thiscall FUN_00666940(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00666390(*(undefined4 *)(param_1 + 4),0x1974ff09);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return param_2;
}

