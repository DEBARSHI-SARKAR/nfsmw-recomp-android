/* speed.exe 0056b950 FUN_0056b950; analysis pseudocode, not buildable source.
 * calls 0065fd30 FUN_0065fd30
 * calls 006616f0 FUN_006616f0
 * calls 0065f740 FUN_0065f740
 * calls 0064abe0 FUN_0064abe0
 * calls 00663f00 FUN_00663f00
 * calls 00662770 FUN_00662770
 * calls 00503360 FUN_00503360
 * calls 00508b10 FUN_00508b10
 * calls 00503380 FUN_00503380
 * calls 00464080 FUN_00464080
 */

void FUN_0056b950(char param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar3 = 0;
  piVar1 = &DAT_008f40f8;
  do {
    if (*piVar1 == DAT_008f41c0) {
      puVar4 = &DAT_008f40f8 + iVar3 * 5;
      goto LAB_0056b976;
    }
    piVar1 = piVar1 + 5;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x8f41c0);
  puVar4 = (undefined4 *)0x0;
LAB_0056b976:
  if (param_1 == '\0') {
    FUN_00663f00(DAT_0091cf74);
    DAT_0091cf74 = 0;
    if (*(int *)(puVar4[3] + 0x60) != 0) {
      FUN_00503360(puVar4[3],8);
      *(undefined4 *)(puVar4[3] + 0x60) = 0;
    }
  }
  if ((param_2 == '\0') && (*(int *)(puVar4[3] + 0x68) != 0)) {
    FUN_00503360(puVar4[3] + 0x40,8);
    *(undefined4 *)(puVar4[3] + 0x68) = 0;
  }
  if ((param_3 == '\0') && (*(int *)(puVar4[3] + 100) != 0)) {
    FUN_00503360(puVar4[3] + 0x20,8);
    *(undefined4 *)(puVar4[3] + 100) = 0;
  }
  if (param_1 != '\0') {
    if (DAT_0091cf74 == 0) {
      DAT_0091cf74 = FUN_0065fd30(puVar4[2],7,0,0,0);
      iVar3 = FUN_0065f740(puVar4[2]);
      iVar2 = FUN_00464080(DAT_008f4004);
      uVar5 = 0;
      if (iVar3 + 0x80 <= iVar2) {
        uVar5 = DAT_008f4004;
      }
      FUN_0064abe0(uVar5 & 0xf | 0x2000,puVar4[2]);
      FUN_006616f0(0,0);
      if (param_4 != '\0') {
        FUN_00662770();
      }
    }
    if (*(int *)(puVar4[3] + 0x60) == 0) {
      FUN_00508b10(puVar4[3],8,0,0,DAT_008f4004);
      *(undefined4 *)(puVar4[3] + 0x60) = 1;
    }
  }
  if ((param_2 != '\0') && (*(int *)(puVar4[3] + 0x68) == 0)) {
    FUN_00508b10(puVar4[3] + 0x40,8,0,0,DAT_008f4004);
    *(undefined4 *)(puVar4[3] + 0x68) = 1;
  }
  if ((param_3 != '\0') && (*(int *)(puVar4[3] + 100) == 0)) {
    FUN_00508b10(puVar4[3] + 0x20,8,0,0,DAT_008f4004);
    *(undefined4 *)(puVar4[3] + 100) = 1;
  }
  if (param_4 != '\0') {
    FUN_00503380("LANGUAGES\\LANGUAGETEXTURES.BIN");
  }
  return;
}

