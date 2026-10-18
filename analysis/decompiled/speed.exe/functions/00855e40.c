/* speed.exe 00855e40 FUN_00855e40; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 */

undefined4 * __fastcall FUN_00855e40(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar5 = in_EAX - 0x24;
  if ((((int)uVar5 < 0) || (0x400 < (int)uVar5)) || (*(int *)(param_2 + 0x1c) != 0x67535073)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0078af30(in_EAX + -0xc);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_2 + 0xc),
                                             *(undefined1 *)(param_2 + 0xd)),
                                    *(undefined1 *)(param_2 + 0xe)),*(undefined1 *)(param_2 + 0xf));
      puVar3[3] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 8),
                                             *(undefined1 *)(param_1 + 9)),
                                    *(undefined1 *)(param_1 + 10)),*(undefined1 *)(param_1 + 0xb)) -
                  *(int *)(param_2 + 0x20);
      uVar1 = *(undefined1 *)(param_2 + 0x1a);
      uVar2 = *(undefined1 *)(param_2 + 0x1b);
      puVar3[4] = uVar5;
      puVar3[1] = (uint)CONCAT11(uVar1,uVar2);
      *(undefined1 *)((int)puVar3 + 0x15) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar6 = (undefined4 *)(param_2 + 0x24);
      puVar7 = (undefined4 *)((int)puVar3 + 0x16);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if (puVar3[3] == 0) {
        puVar3[3] = 1;
        return puVar3;
      }
    }
  }
  return puVar3;
}

