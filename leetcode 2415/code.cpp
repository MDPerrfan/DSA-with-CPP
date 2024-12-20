std::queue<TreeNode*> queue{{root}}; // Initialize a queue to facilitate level order traversal.
        int level = 0; // Start from level 0 (which is the root level).
        std::vector<TreeNode*> nodesToReverse; // This vector holds nodes of the current level.

        // While there are still nodes left to process in the queue
        while (!queue.empty()) {
            nodesToReverse.clear(); // Clear the vector for the new level of nodes.
            for (int n = queue.size(); n > 0; --n) {
                TreeNode* currentNode = queue.front(); // Get the front node from the queue.
                queue.pop(); // Pop the front node.

                // If we are at an odd level, collect the nodes to be reversed.
                if (level % 2 == 1) {
                    nodesToReverse.push_back(currentNode);
                }
              
                // If left child exists, push it onto the queue for the next level's traversal.
                if (currentNode->left) {
                    queue.push(currentNode->left);
                }
                // If right child exists, push it onto the queue too.
                if (currentNode->right) {
                    queue.push(currentNode->right);
                }
            }

            // Reverse the node values if we have collected any nodes.
            if (!nodesToReverse.empty()) {
                int left = 0; // Start from the first node in the vector.
                int right = nodesToReverse.size() - 1; // And the last node.
                while (left < right) {
                    // Swap values of the node pair.
                    std::swap(nodesToReverse[left]->val, nodesToReverse[right]->val);
                    ++left;
                    --right;
                }
            }
            ++level; // Increment the level count after processing all nodes at current level.
        }

        return root; // Return the updated tree.