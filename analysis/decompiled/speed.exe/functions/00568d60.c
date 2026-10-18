/* speed.exe 00568d60 FUN_00568d60; analysis pseudocode, not buildable source.
 * calls 00524aa0 FUN_00524aa0
 * calls 00524920 FUN_00524920
 * calls 00524a10 FUN_00524a10
 */

void __thiscall FUN_00568d60(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0x28) < param_2) {
      cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + -0x20),0x3787231c,0x4f90cf9b);
      if (cVar1 == '\0') {
        FUN_00524920(*(undefined4 *)(param_1 + -0x20),0x3787231c,0x4f90cf9b,1);
        *(int *)(param_1 + 0x28) = param_2;
        return;
      }
    }
    else {
      cVar1 = FUN_00524a10(*(undefined4 *)(param_1 + -0x20),0x3787231c,0xfb12d252);
      if (cVar1 == '\0') {
        FUN_00524920(*(undefined4 *)(param_1 + -0x20),0x3787231c,0xfb12d252,1);
      }
      if (param_2 < *(int *)(param_1 + 0x28)) {
        cVar1 = FUN_00524a10(*(undefined4 *)(param_1 + -0x20),0x3b9919a8,0x579dbc92);
        if (cVar1 == '\0') {
          FUN_00524920(*(undefined4 *)(param_1 + -0x20),0x3b9919a8,0x579dbc92,1);
        }
      }
    }
    *(int *)(param_1 + 0x28) = param_2;
  }
  return;
}

