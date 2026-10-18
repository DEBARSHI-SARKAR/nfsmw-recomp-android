/* speed.exe 004abaa0 FUN_004abaa0; analysis pseudocode, not buildable source.
 */

char __fastcall FUN_004abaa0(int param_1)

{
  char cVar1;
  
  cVar1 = *(int *)(param_1 + 0xcc) != 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

