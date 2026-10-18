/* speed.exe 005d8800 FUN_005d8800; analysis pseudocode, not buildable source.
 * calls 0045cd20 __break
 * calls 004519d0 FUN_004519d0
 * calls 005d0450 FUN_005d0450
 * calls 00464780 FUN_00464780
 * calls 007c5f80 _tolower
 * calls 004522f0 FUN_004522f0
 * calls 005d84e0 FUN_005d84e0
 */

void FUN_005d8800(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 local_10;
  undefined4 local_8;
  undefined4 *local_4;
  
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  puVar4 = DAT_00925c2c;
  if ((DAT_00925c2c == (undefined4 *)0x0) &&
     (cVar1 = FUN_005d0450(0x3f), puVar4 = DAT_00925c2c, cVar1 == '\0')) {
    FUN_00464780("Out of Fastmem memory\n");
                    /* WARNING: Subroutine does not return */
    __break();
  }
  DAT_00925c2c = (undefined4 *)*puVar4;
  puVar7 = puVar4;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (iVar3 != 0) {
    iVar6 = iVar3;
    puVar7 = puVar4;
    do {
      iVar5 = _tolower((int)*(char *)(((int)param_1 - (int)puVar4) + (int)puVar7));
      *(char *)puVar7 = (char)iVar5;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)((int)puVar4 + iVar3) = 0;
  local_10 = FUN_004522f0(puVar4);
  local_8 = FUN_004519d0(puVar4);
  local_4 = puVar4;
  FUN_005d84e0(&local_10);
  *puVar4 = DAT_00925c2c;
  DAT_00925c2c = puVar4;
  return;
}

