/* speed.exe 00427010 FUN_00427010; analysis pseudocode, not buildable source.
 * calls 00423990 FUN_00423990
 */

void __thiscall FUN_00427010(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))();
  FUN_00423990(param_2,*(undefined4 *)(param_1 + 0x50),uVar1,0x402ccccd,0x40a9999a);
  return;
}

