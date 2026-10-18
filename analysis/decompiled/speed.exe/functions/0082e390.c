/* speed.exe 0082e390 FUN_0082e390; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082e390(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < param_1) && (param_1 < 4)) && (iVar1 = (&DAT_009c2954)[param_1], iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) != 0)) {
    if ((((param_2 & 0xf0000000) == 0) || ((*(uint *)(iVar1 + 0x14) & param_2 & 0xf0000000) != 0))
       && ((*(uint *)(iVar1 + 0x14) & param_2 & 0xf000000) != 0)) {
      DAT_009c2964 = iVar1;
      return *(undefined4 *)(iVar1 + 0x14);
    }
  }
  return 0;
}

