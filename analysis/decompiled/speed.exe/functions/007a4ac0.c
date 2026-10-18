/* speed.exe 007a4ac0 FUN_007a4ac0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007a4ac0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x1c0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c0))(1);
    *(undefined4 *)(param_1 + 0x1c0) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  return;
}

