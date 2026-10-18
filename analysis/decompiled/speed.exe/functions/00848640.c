/* speed.exe 00848640 FUN_00848640; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 00846a70 FUN_00846a70
 * calls 00852430 GetTickCount
 * calls 00847940 FUN_00847940
 */

undefined4 FUN_00848640(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD DVar3;
  undefined *puVar4;
  
  DVar3 = GetTickCount();
  puVar4 = PTR_DAT_0090d370;
  if ((-1 < param_3) && (param_3 < 7)) {
    puVar4 = (&PTR_DAT_0090d370)[param_3];
  }
  puVar1 = (undefined1 *)(param_1 + 0x454);
  *puVar1 = 0;
  FUN_0083c880(puVar1,0x80,&DAT_008c6e94,param_2);
  FUN_0083c880(puVar1,0x80,&DAT_0089da48,puVar4);
  if (*(int *)(param_1 + 0x4e0) == 0) {
    *(DWORD *)(param_1 + 0x4e0) = DVar3 + param_4;
  }
  iVar2 = *(int *)(param_1 + 0x4e4);
  if (iVar2 != param_3) {
    if ((((iVar2 == 5) || (iVar2 == 6)) && (param_3 == 1)) && (param_5 == 0)) {
      FUN_00847940(param_1,*(undefined4 *)(param_1 + 0x8dc),*(undefined4 *)(param_1 + 0x8d8));
    }
    *(int *)(param_1 + 0x4e4) = param_3;
    *(DWORD *)(param_1 + 0x4e0) = DVar3;
  }
  if (*(uint *)(param_1 + 0x4e0) <= DVar3) {
    FUN_00846a70();
  }
  return 0;
}

