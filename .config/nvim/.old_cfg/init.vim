call plug#begin()
Plug 'morhetz/gruvbox'
Plug 'sainnhe/sonokai'
call plug#end()

colorscheme gruvbox

set number
set hidden
set mouse=a
set inccommand=split

let mapleader="\<space>"
let mapcontrol="\<ctrl_l>"
nnoremap <leader>; A;<esc>
nnoremap <leader>ev :vsplit ~/.config/nvim/init.vim<cr>
nnoremap <leader>sv :source ~/.config/nvim/init.vim<cr>

