/* speed.exe 005135e0 FUN_005135e0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 */

void __thiscall FUN_005135e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x11a2) = 1;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar1 = FUN_0056bc10(0xa19617bd);
    *(undefined4 *)(param_1 + 0x11bc) = uVar1;
  }
  else {
    *(char **)(param_1 + 0x11bc) = "Unable to submit complaint";
  }
  *(undefined4 *)(param_1 + 0x11b0) = 0x417b2601;
  *(undefined4 *)(param_1 + 0x11b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11b8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11ac) = 1;
  return;
}

