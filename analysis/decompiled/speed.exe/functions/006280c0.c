/* speed.exe 006280c0 FUN_006280c0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 00627c40 FUN_00627c40
 * calls 00460ca0 FUN_00460ca0
 * calls 0057e8a0 FUN_0057e8a0
 */

void FUN_006280c0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  WCHAR *pWVar5;
  int *local_354;
  undefined4 local_350 [4];
  CHAR aCStack_340 [288];
  WCHAR aWStack_220 [270];
  
  FUN_00460ca0(param_1,&DAT_00890978,param_2);
  if (param_3 == 1) {
    local_354 = *(int **)(DAT_0091f1d8 + 0x218);
    uVar3 = param_4[1];
  }
  else {
    local_354 = *(int **)(DAT_0091f150 + 0x218);
    uVar3 = param_4[2];
  }
  switch(*param_4) {
  case 1:
  case 2:
    uVar2 = 4;
    break;
  case 3:
    uVar2 = 0x10;
    uVar3 = 0;
    break;
  case 4:
  case 5:
    uVar2 = 2;
    break;
  case 6:
  case 7:
    uVar2 = 2;
    uVar3 = uVar3 + 3;
    break;
  case 8:
  case 9:
    uVar2 = 2;
    uVar3 = uVar3 + 1;
    break;
  default:
    uVar2 = 0x80;
  }
  puVar4 = local_350;
  for (iVar1 = 0x4f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_350[0] = 0x13c;
  iVar1 = (**(code **)(*local_354 + 0x38))(local_354,local_350,(uVar3 & 0xffff) << 8 | uVar2,2);
  if (iVar1 == 0) {
    pWVar5 = aWStack_220;
    for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
      pWVar5[0] = L'\0';
      pWVar5[1] = L'\0';
      pWVar5 = pWVar5 + 2;
    }
    MultiByteToWideChar(0,0,aCStack_340,-1,aWStack_220,0x104);
    FUN_0057e8a0(param_1,param_2,aWStack_220);
    if (*param_4 == 2) {
      FUN_00627c40(param_1,param_2);
    }
    iVar1 = FUN_00460d20(param_1,&DAT_008a7a50);
    if (iVar1 == 0) {
      FUN_00460ca0(param_1,"LEERTASTE",param_2);
    }
  }
  return;
}

