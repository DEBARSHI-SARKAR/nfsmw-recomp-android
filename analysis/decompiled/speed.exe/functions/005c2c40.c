/* speed.exe 005c2c40 FUN_005c2c40; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005bb370 FUN_005bb370
 * calls 005b3da0 FUN_005b3da0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b6df0 FUN_005b6df0
 * calls 0050d700 FUN_0050d700
 * calls 005c1d00 FUN_005c1d00
 * calls 005b1380 FUN_005b1380
 */

undefined4 __thiscall FUN_005c2c40(int param_1,ushort *param_2,int param_3,char param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  void *pvVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar1 = param_2;
  puVar5 = (ushort *)(param_3 + (int)param_2);
  puVar7 = (undefined4 *)0x0;
  iVar6 = -1;
  param_2 = (ushort *)0x0;
  for (; puVar1 < puVar5; puVar1 = (ushort *)(puVar1[1] + 4 + (int)puVar1)) {
    uVar2 = *puVar1;
    if (uVar2 < 0x7353) {
      if (uVar2 == 0x7352) {
        FUN_005b6df0(puVar1 + 2);
      }
      else if (uVar2 == 0x434d) {
        FUN_005bb370(*(undefined4 *)(puVar1 + 2));
      }
      else if (uVar2 == 0x694d) {
        uVar3 = *(undefined4 *)(puVar1 + 2);
        if (((param_4 == '\0') && (*(char *)(param_1 + 0x18) != '\0')) &&
           (puVar7 = (undefined4 *)FUN_005b1380(uVar3), puVar7 != (undefined4 *)0x0)) {
          pvVar4 = (void *)puVar7[5];
          if (pvVar4 != (void *)0x0) {
            _eh_vector_destructor_iterator_(pvVar4,0xc,*(int *)((int)pvVar4 + -4),FUN_005b6dc0);
            thunk_FUN_007c7250((int)pvVar4 + -4);
          }
          puVar7[5] = 0;
          puVar7[4] = 0;
          iVar6 = -1;
        }
        else {
          puVar7 = (undefined4 *)FUN_005c1d00();
          puVar7[1] = 0xabadcafe;
          puVar7[2] = 0xabadcafe;
          *puVar7 = &PTR_FUN_008a2c28;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[3] = uVar3;
          if (param_4 == '\0') {
            FUN_0050d700(puVar7);
            iVar6 = -1;
          }
          else {
            FUN_005b3da0(puVar7);
            iVar6 = -1;
          }
        }
      }
      else if (uVar2 == 0x6952) {
        iVar6 = iVar6 + 1;
        param_2 = (ushort *)(puVar7[5] + iVar6 * 0xc);
        *(undefined4 *)param_2 = *(undefined4 *)(puVar1 + 2);
      }
    }
    else if (uVar2 == 0x7452) {
      *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(puVar1 + 2);
    }
    else if (uVar2 == 0x7552) {
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(puVar1 + 2);
    }
  }
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}

