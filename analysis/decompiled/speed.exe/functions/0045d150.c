/* speed.exe 0045d150 FUN_0045d150; analysis pseudocode, not buildable source.
 * calls 0045cba0 FUN_0045cba0
 */

void __thiscall FUN_0045d150(int *param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined1 local_7fc [28];
  undefined1 local_7e0 [2016];
  
  cVar1 = (char)param_2[1];
  if (cVar1 == '\0') {
    uVar4 = (uint)*(byte *)((int)param_2 + 3);
    cVar1 = *(char *)(uVar4 + 0x50 + (int)param_1);
    if ((cVar1 == '\0') && ((code *)param_1[uVar4 + 0x34] != (code *)0x0)) {
      (*(code *)param_1[uVar4 + 0x34])(param_2 + 0xe,*param_2 - 0x1c);
      return;
    }
    if ((cVar1 == '\x01') && ((code *)param_1[uVar4 + 0x34] != (code *)0x0)) {
      (*(code *)param_1[uVar4 + 0x34])(param_2 + 0xe,*param_2 - 0x1c,0);
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      pcVar3 = (code *)param_1[*(byte *)((int)param_2 + 3) + 0x34];
      if (pcVar3 == (code *)0x0) {
        uVar5 = 0xfffffffc;
      }
      else if (*(char *)(*(byte *)((int)param_2 + 3) + 0x50 + (int)param_1) == '\0') {
        (*pcVar3)(param_2 + 0xe,*param_2 - 0x1c);
        uVar5 = 0;
      }
      else {
        uVar5 = (*pcVar3)(param_2 + 0xe,*param_2 - 0x1c,local_7e0);
      }
      FUN_0045cba0(param_2,uVar5);
      (**(code **)(*param_1 + 8))(local_7fc);
      return;
    }
    if (cVar1 == '\x02') {
      uVar2 = param_2[0xc];
      if (0 < (short)uVar2) {
        puVar6 = param_2 + 0xe;
        puVar7 = *(undefined4 **)(param_2 + 8);
        for (uVar4 = (uint)(int)(short)uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *(undefined4 *)puVar6;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = (int)(short)uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar7 = (char)*puVar6;
          puVar6 = (ushort *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      **(int **)(param_2 + 10) = (int)(short)param_2[0xc];
    }
  }
  return;
}

