/* speed.exe 007a66d0 FUN_007a66d0; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 005252d0 FUN_005252d0
 * calls 004647e0 FUN_004647e0
 * calls 0056bc10 FUN_0056bc10
 */

void __thiscall FUN_007a66d0(int param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte local_40 [64];
  
  if (param_2 == '\0') {
    uVar3 = FUN_0056bc10(0x1f242e03);
  }
  else {
    uVar3 = FUN_0056bc10(0x92fcdbf0);
  }
  FUN_004647e0(local_40,0x40,&DAT_008941f8,uVar3);
  iVar4 = FUN_0056bb20();
  if (((iVar4 != 2) && (iVar4 != 0xd)) && (local_40[0] != 0)) {
    pbVar5 = local_40;
    do {
      bVar2 = *pbVar5;
      if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
        bVar2 = bVar2 | 0x20;
      }
      *pbVar5 = bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar1 != 0);
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb71b576d,&DAT_008941f8,local_40);
  return;
}

