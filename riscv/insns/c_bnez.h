require_extension(EXT_ZCA);
if (RVC_RS1S != 0) {
  if (p->is_ctr_enabled()) {
    p->ctr_add_entry(pc, pc + insn.rvc_b_imm(), CTRDATA_TYPE_TAKEN_BRANCH);
  }
  set_pc(pc + insn.rvc_b_imm());
} else {
  if (p->is_ctr_enabled()) {
    p->ctr_add_entry(pc, npc, CTRDATA_TYPE_NONTAKEN_BRANCH);
  }
}
