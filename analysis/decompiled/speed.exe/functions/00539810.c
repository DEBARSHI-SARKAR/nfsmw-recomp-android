/* speed.exe 00539810 FUN_00539810; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 005b8550 FUN_005b8550
 * calls 005750d0 FUN_005750d0
 * calls 00515d70 FUN_00515d70
 * calls 00522e50 FUN_00522e50
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

int * __thiscall FUN_00539810(int *param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_005af1c0("Chat_ScrollBar_Arrow_1");
  if (param_2 == 0) {
LAB_00539848:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00516af0(param_2);
    if (iVar3 == 0) goto LAB_00539848;
    iVar3 = FUN_005b8550(uVar2);
    if (iVar3 == 0) goto LAB_00539848;
  }
  *param_1 = iVar3;
  uVar2 = FUN_005af1c0("Chat_ScrollBar_Arrow_2");
  if (param_2 == 0) {
LAB_0053987b:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00516af0(param_2);
    if (iVar3 == 0) goto LAB_0053987b;
    iVar3 = FUN_005b8550(uVar2);
    if (iVar3 == 0) goto LAB_0053987b;
  }
  param_1[1] = iVar3;
  FUN_005750d0(param_2,"Chat_ScrollBar",1,0,0);
  if (param_2 != 0) {
    iVar3 = FUN_00516af0(param_2);
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0x4162454c);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 2)) goto LAB_005398c4;
    }
  }
  iVar3 = 0;
LAB_005398c4:
  param_1[0x19] = iVar3;
  iVar3 = FUN_00585b50(*(undefined4 *)(iVar3 + 0x24));
  param_1[0x1a] = iVar3;
  iVar3 = *(int *)(param_1[0x19] + 0x74);
  param_1[0x1c] = 0;
  param_1[0x1b] = iVar3;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  puVar1 = (uint *)(param_1[0x19] + 0x1c);
  *puVar1 = *puVar1 | 0x200;
  param_1[0x1c] = *(int *)(param_1[0x19] + 0x1c);
  FUN_00515d70(param_1[0x19],&DAT_00890978);
  FUN_00522e50();
  return param_1;
}

