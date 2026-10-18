/* speed.exe 00540e30 FUN_00540e30; analysis pseudocode, not buildable source.
 * calls 00524490 FUN_00524490
 * calls 00837410 FUN_00837410
 * calls 00460ed0 FUN_00460ed0
 * calls 0083df40 FUN_0083df40
 * calls 00837530 FUN_00837530
 * calls 00572e80 FUN_00572e80
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 */

void FUN_00540e30(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char local_308 [2];
  undefined4 local_306 [63];
  undefined2 local_208;
  undefined4 local_206 [63];
  undefined1 local_108 [260];
  
  FUN_00572e80();
  DAT_0091ca90 = 1;
  iVar2 = FUN_00837530();
  if (iVar2 != 0) {
    FUN_00837410();
    local_308[0] = ' ';
    local_308[1] = '\0';
    puVar5 = local_306;
    for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_00460ed0();
    FUN_00460ed0(local_308,local_308,&DAT_0089e2d8);
    local_208 = 0x20;
    puVar5 = local_206;
    for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_0083a670();
    FUN_0083b210();
    uVar3 = 0;
    do {
      local_108[uVar3] = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    pcVar4 = local_308;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = local_308;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0083df40();
    FUN_00524490();
  }
  return;
}

