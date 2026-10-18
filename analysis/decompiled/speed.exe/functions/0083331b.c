/* speed.exe 0083331b FUN_0083331b; analysis pseudocode, not buildable source.
 * calls 00832616 FUN_00832616
 */

undefined4 FUN_0083331b(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar1 = FUN_00832616();
  iVar3 = 0;
  if ((*(byte *)(in_EAX + 4) & 0x7f) != 0) {
    pbVar4 = (byte *)(param_1 + 0xc);
    do {
      uVar2 = (uint)*pbVar4;
      if ((((uVar2 != 0) && (uVar2 != 0xff)) && (uVar2 != 0xfe)) &&
         ((*(uint *)(param_2 + uVar2 * 4) & *(uint *)(iVar1 + iVar3 * 4)) == 0)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 8;
    } while (iVar3 < (int)(*(byte *)(in_EAX + 4) & 0x7f));
  }
  return 1;
}

