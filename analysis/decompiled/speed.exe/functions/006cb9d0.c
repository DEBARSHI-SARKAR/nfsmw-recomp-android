/* speed.exe 006cb9d0 FUN_006cb9d0; analysis pseudocode, not buildable source.
 * calls 007ece0c FUN_007ece0c
 * calls 007ecddf FUN_007ecddf
 */

void FUN_006cb9d0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_1c;
  
  local_50 = 0x50;
  FUN_007ecddf(&local_50);
  local_48 = 0x40;
  local_4c = DAT_00910ef4;
  pcVar1 = &DAT_0093dc08;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (pcVar2 + -0x93dc08 != (char *)0x0) {
    local_1c = &DAT_0093dc08;
  }
  FUN_007ece0c(&local_50,pcVar2 + -0x93dc08);
  return;
}

