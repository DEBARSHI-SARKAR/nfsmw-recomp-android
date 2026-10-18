/* speed.exe 005fa3c0 FUN_005fa3c0; analysis pseudocode, not buildable source.
 * calls 005fa1f0 FUN_005fa1f0
 * calls 005db770 FUN_005db770
 * calls 005ed6f0 FUN_005ed6f0
 * calls 005db6f0 FUN_005db6f0
 * calls 005f9480 FUN_005f9480
 * calls 005ee870 FUN_005ee870
 */

void __thiscall FUN_005fa3c0(int param_1,int param_2)

{
  int extraout_ECX;
  int iStack_c;
  
  iStack_c = param_1;
  if (*(char *)(param_1 + 0x3d) == '\0') {
    iStack_c = 0x5fa3d0;
    FUN_005f9480();
    iStack_c = extraout_ECX;
  }
  if (param_2 != *(int *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_005db770(&iStack_c);
      FUN_005fa1f0();
    }
    iStack_c = 0x5fa3f7;
    FUN_005ed6f0();
    if (*(char *)(param_1 + 0x3d) == '\0') {
      iStack_c = 0x5fa405;
      FUN_005f9480();
    }
    *(int *)(param_1 + 0x28) = param_2;
    if (param_2 != 0) {
      iStack_c = param_2;
      FUN_005ee870();
      FUN_005db6f0(&iStack_c);
      FUN_005fa1f0();
    }
  }
  return;
}

