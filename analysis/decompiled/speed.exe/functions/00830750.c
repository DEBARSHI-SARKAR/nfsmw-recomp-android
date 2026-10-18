/* speed.exe 00830750 FUN_00830750; analysis pseudocode, not buildable source.
 * calls 00830640 FUN_00830640
 * calls 007c6100 _sprintf
 */

undefined4 FUN_00830750(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_204;
  undefined4 local_203;
  
  iVar2 = param_2;
  if (-1 < param_2) {
    iVar3 = (**(code **)(**(int **)(param_1 + 300) + 0x6c))();
    if (iVar2 < iVar3) {
      if (-1 < *(int *)(param_1 + 0x11c)) {
        return 0xffffd8f1;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 300) + 0x74))(iVar2);
      if (iVar3 != 0) {
        return 0xffffff44;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 300) + 0x78))();
      if (iVar3 == 0) {
        return 0xfffffff3;
      }
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x10) = iVar2;
      local_204 = '\0';
      puVar6 = &local_203;
      for (iVar5 = 0x7f; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      pcVar4 = (char *)(param_1 + 0x7c);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _sprintf(&local_204,"%.*s%d.mus",pcVar4 + (-4 - (param_1 + 0x7d)),(char *)(param_1 + 0x7c),
               iVar2);
      param_2 = 0xbedfaced;
      iVar5 = (**(code **)(*DAT_009c29a8 + 0x18))(&local_204,&param_2,param_3);
      *(int *)(iVar3 + 0x20) = iVar5;
      if (iVar5 == 0) {
        return 0xffffffd9;
      }
      *(int *)(param_1 + 0x11c) = iVar2;
      *(undefined4 *)(param_1 + 0x124) = 1;
      *(int *)(param_1 + 0x120) = param_2;
      FUN_00830640(param_1,iVar2);
      return 0;
    }
  }
  return 0xfffffff8;
}

