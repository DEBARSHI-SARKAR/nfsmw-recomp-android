/* speed.exe 005eefa0 FUN_005eefa0; analysis pseudocode, not buildable source.
 * calls 005eb800 FUN_005eb800
 * calls 005eeb90 FUN_005eeb90
 */

void __fastcall FUN_005eefa0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 != *(int *)(param_1 + 0x84)) {
    do {
      cVar1 = FUN_005eb800();
      if (cVar1 != '\0') {
        FUN_005eeb90();
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x84));
  }
  return;
}

