/* speed.exe 004c7ea0 FUN_004c7ea0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 * calls 004b1ee0 FUN_004b1ee0
 */

void __fastcall FUN_004c7ea0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 local_10;
  undefined1 local_c [12];
  
  cVar2 = '\0';
  local_10 = 0;
  if ((DAT_009b2c14 != 0) || (DAT_009aab58 != 0)) {
    cVar2 = '\x01';
    local_10 = 1;
  }
  *(char *)(param_1 + 0x10) = cVar2;
  if (cVar2 != *(char *)(param_1 + 0x11)) {
    FUN_004b1ee0(local_10);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    do {
      do {
        iVar1 = *(int *)(param_1 + 0x14);
      } while (iVar1 == 0);
      FUN_0081bccb();
      FUN_0081ccaa(*(undefined4 *)(iVar1 + 0x18),local_c);
      FUN_0081bcd9();
    } while( true );
  }
  return;
}

