/* speed.exe 00540f90 FUN_00540f90; analysis pseudocode, not buildable source.
 * calls 00524490 FUN_00524490
 * calls 00837410 FUN_00837410
 * calls 00460ed0 FUN_00460ed0
 * calls 0083df40 FUN_0083df40
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 */

void FUN_00540f90(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_308 [2];
  undefined4 local_306 [63];
  undefined2 local_208;
  undefined4 local_206 [63];
  undefined1 local_108 [260];
  
  FUN_00837410();
  local_308[0] = ' ';
  local_308[1] = '\0';
  puVar5 = local_306;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  FUN_00460ed0();
  FUN_00460ed0(local_308,local_308,&DAT_0089e2d8);
  local_208 = 0x20;
  puVar5 = local_206;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  FUN_0083a670();
  FUN_0083b210();
  uVar2 = 0;
  do {
    local_108[uVar2] = (char)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  pcVar3 = local_308;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = local_308;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0083df40();
  FUN_00524490();
  return;
}

