/* speed.exe 007ed90b FUN_007ed90b; analysis pseudocode, not buildable source.
 * calls 007ed83c FUN_007ed83c
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed010 FUN_007ed010
 */

int __thiscall FUN_007ed90b(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_007ed010(param_2);
  FUN_007ec1bd();
  iVar1 = FUN_007ed83c(param_2);
  iVar2 = 0;
  if (param_1 == 0) {
    if (iVar1 == 0) {
      iVar2 = -3;
    }
    else if (*(char *)(iVar1 + 0x10) == '\x01') {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)*(char *)(iVar1 + 0x11);
    }
  }
  FUN_007ec1c8();
  return iVar2;
}

