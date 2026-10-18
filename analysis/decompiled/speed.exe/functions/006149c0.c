/* speed.exe 006149c0 FUN_006149c0; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00613880 FUN_00613880
 */

void FUN_006149c0(void)

{
  char *pcVar1;
  undefined4 *in_EAX;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = "\x1bLua";
  do {
    iVar2 = FUN_00614240();
    if (iVar2 != *pcVar3) {
      if (*pcVar3 != '\0') {
        FUN_00613880(*in_EAX,"bad signature in %s",in_EAX[4]);
      }
      return;
    }
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  return;
}

