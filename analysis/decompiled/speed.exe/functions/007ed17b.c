/* speed.exe 007ed17b FUN_007ed17b; analysis pseudocode, not buildable source.
 * calls 007f0df9 FUN_007f0df9
 * calls 007c97c0 FUN_007c97c0
 */

void FUN_007ed17b(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_007f0df9(*(undefined4 *)(DAT_009bb13c + 0x8c),DAT_009076ec);
  FUN_007f0df9(*(undefined4 *)(DAT_009bb13c + 0x88),DAT_009076e8 << 2);
  iVar5 = DAT_009bb13c;
  puVar1 = (undefined4 *)(DAT_009bb13c + 0x8c);
  pcVar6 = (char *)*puVar1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    *pcVar6 = cVar2;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  puVar3 = (undefined1 *)*puVar1;
  **(undefined4 **)(iVar5 + 0x88) = puVar3;
  iVar5 = 1;
  while( true ) {
    puVar3 = (undefined1 *)FUN_007c97c0(puVar3,0x3b);
    if (puVar3 == (undefined1 *)0x0) break;
    *puVar3 = 0;
    if ((puVar3[-1] == '/') || (puVar3[-1] == '\\')) {
      puVar3[-1] = 0;
    }
    puVar3 = puVar3 + 1;
    *(undefined1 **)(*(int *)(DAT_009bb13c + 0x88) + iVar5 * 4) = puVar3;
    iVar5 = iVar5 + 1;
  }
  pcVar6 = *(char **)(*(int *)(DAT_009bb13c + 0x88) + -4 + iVar5 * 4);
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  if ((pcVar4[-1] == '/') || (pcVar4[-1] == '\\')) {
    pcVar4[-1] = '\0';
  }
  return;
}

