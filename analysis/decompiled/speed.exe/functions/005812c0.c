/* speed.exe 005812c0 FUN_005812c0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005812c0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar1 = 0;
  puVar2 = (uint *)(param_1 + 0x34);
  iVar3 = 0x28;
  do {
    if (((puVar2[-0xd] != 0xffffffff) && ((puVar2[-10] & param_2 & 0xffff0000) != 0)) &&
       ((puVar2[-10] & param_2 & 0xffff) != 0)) {
      iVar1 = iVar1 + 1;
    }
    if (((puVar2[-8] != 0xffffffff) && ((puVar2[-5] & param_2 & 0xffff0000) != 0)) &&
       ((puVar2[-5] & param_2 & 0xffff) != 0)) {
      iVar1 = iVar1 + 1;
    }
    if (((puVar2[-3] != 0xffffffff) && ((*puVar2 & param_2 & 0xffff0000) != 0)) &&
       ((*puVar2 & param_2 & 0xffff) != 0)) {
      iVar1 = iVar1 + 1;
    }
    if (((puVar2[2] != 0xffffffff) && ((puVar2[5] & param_2 & 0xffff0000) != 0)) &&
       ((puVar2[5] & param_2 & 0xffff) != 0)) {
      iVar1 = iVar1 + 1;
    }
    if (((puVar2[7] != 0xffffffff) && ((puVar2[10] & param_2 & 0xffff0000) != 0)) &&
       ((puVar2[10] & param_2 & 0xffff) != 0)) {
      iVar1 = iVar1 + 1;
    }
    puVar2 = puVar2 + 0x19;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

