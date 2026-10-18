/* speed.exe 006669f0 FUN_006669f0; analysis pseudocode, not buildable source.
 * calls 00666390 FUN_00666390
 */

void __thiscall FUN_006669f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00666390(uVar1,0x1974ff09);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}

