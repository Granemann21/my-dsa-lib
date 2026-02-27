from typing import Any, Optional

class Node:
    def __init__(self, data: Any):
        self.data = data
        self.next: Optional['Node'] = None

    def __repr__(self) -> str:
        return f"Node({self.data})"
    
