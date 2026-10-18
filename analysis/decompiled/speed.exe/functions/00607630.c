/* speed.exe 00607630 FUN_00607630; analysis pseudocode, not buildable source.
 * calls 007cacc0 _strncat
 * calls 007c64e0 _strncpy
 * calls 007cae00 _strcspn
 */

void FUN_00607630(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  char *pcVar2;
  size_t _Count;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*param_2 == '=') {
    _strncpy(param_1,param_2 + 1,param_3);
    param_1[param_3 - 1] = '\0';
    return;
  }
  if (*param_2 != '@') {
    _Count = _strcspn(param_2,"\n");
    if ((int)(param_3 - 0x11) < (int)_Count) {
      _Count = param_3 - 0x11;
    }
    *(undefined4 *)param_1 = s__string___008a40cc._0_4_;
    *(undefined4 *)(param_1 + 4) = s__string___008a40cc._4_4_;
    *(undefined2 *)(param_1 + 8) = s__string___008a40cc._8_2_;
    pcVar2 = param_2;
    if (param_2[_Count] == '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)param_2;
      pcVar2 = param_1 + -1;
      do {
        pcVar5 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar5 != '\0');
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *param_2;
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
    else {
      _strncat(param_1,param_2,_Count);
      pcVar2 = param_1 + -1;
      do {
        pcVar5 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar5 != '\0');
      *(undefined4 *)pcVar2 = DAT_008a40d8;
    }
    pcVar2 = param_1 + -1;
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (pcVar5[1] != '\0');
    *(undefined2 *)(pcVar5 + 1) = DAT_008a40c8;
    pcVar5[3] = DAT_008a40ca;
    return;
  }
  pcVar5 = param_2 + 1;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *param_1 = '\0';
  pcVar6 = pcVar5;
  if ((int)(param_3 - 8) < (int)pcVar2 - (int)(param_2 + 2)) {
    pcVar5 = pcVar5 + (((int)pcVar2 - (int)(param_2 + 2)) - (param_3 - 8));
    pcVar2 = param_1 + -1;
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    *(undefined4 *)pcVar2 = DAT_008a40d8;
    pcVar6 = pcVar5;
  }
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  param_1 = param_1 + -1;
  do {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = pcVar6;
  for (uVar3 = (uint)((int)pcVar5 - (int)pcVar6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = (int)pcVar5 - (int)pcVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

