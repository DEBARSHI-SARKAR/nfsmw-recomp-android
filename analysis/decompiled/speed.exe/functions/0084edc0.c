/* speed.exe 0084edc0 FUN_0084edc0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084ed50 FUN_0084ed50
 */

void FUN_0084edc0(void)

{
  int in_EAX;
  DWORD DVar1;
  
  if ((CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 0x88),*(undefined1 *)(in_EAX + 0x89)),
                         *(undefined1 *)(in_EAX + 0x8a)),*(undefined1 *)(in_EAX + 0x8b)) != 0) &&
     (CONCAT11(*(undefined1 *)(in_EAX + 0x86),*(undefined1 *)(in_EAX + 0x87)) != 0)) {
    DVar1 = GetTickCount();
    if (999 < DVar1 - *(int *)(in_EAX + 200)) {
      if (*(int *)(in_EAX + 0x94) == 1) {
        FUN_0084ed50(0x10);
        return;
      }
      if (*(int *)(in_EAX + 0x94) == 2) {
        FUN_0084ed50(0x11);
      }
    }
  }
  return;
}

